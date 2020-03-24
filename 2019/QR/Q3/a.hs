import Control.Monad
import Data.List
import Data.Maybe
main = do
        t <- readLn
        forM_ [1..t] 
            (\i-> do   
                n<- getLine
                --l<- getLine
                list<- fmap (fmap read . words) getLine
                let tlist = zipWith gcd list $ tail list in
                    let ntlist = (div (head list) (head tlist)) : tlist ++ [div (last list) (last tlist)]  in
                        let m = flip zip ['A'..] $ nub $ sort ntlist in
                        do
                            putStr $ "Case #"++ show i++": "
                            putStrLn $ fromJust $ sequence $ map (flip lookup m) ntlist
                        
                            
                )
                
                
        
        