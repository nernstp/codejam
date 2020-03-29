import Control.Monad
import Data.List
import Data.Maybe
import Control.Applicative
main = do
        t <- readLn
        forM_ [1..t] 
            (\i-> do   
                n<- getLine
                --l<- getLine
                list<- fmap (fmap read . words) getLine
                let dlist = map head $ group list in
                    let start = gcd (head dlist) $ head $ tail dlist in
                       let fact = fromJust $ (sequence $ scanl (\a b-> a>>=(\y->justDiv b y)) (Just (div (head dlist) start)) list)  <|>(sequence $ scanl (\a b-> a>>=(\y->justDiv b y)) (Just start) list) in
                            let slist =  flip zip ['A'..] $ nub $ sort fact in
                                do
                                    putStr $ "Case #"++ show i++": "
                                    putStrLn $ fromJust $ sequence $ map (flip lookup slist) fact
                                    -- putStrLn $ fromJust $ map (flip lookup slist) fact
                
                -- let tlist = zipWith gcd list $ tail list in
                    -- let ntlist = (div (head list) (head tlist)) : tlist ++ [div (last list) (last tlist)]  in
                        -- let m = flip zip ['A'..] $ nub $ sort ntlist in
                        -- do
                            -- putStr $ "Case #"++ show i++": "
                            -- putStrLn $ fromJust $ sequence $ map (flip lookup m) ntlist
                        
                            
                )
                
justDiv a b = if (mod a b)==0 then Just $ div a b else Nothing                
        
        