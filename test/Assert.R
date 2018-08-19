# 
#
# @Author -- Jingtang Zhang
# @Date   -- 2018.8.18, Ningbo
# @Update -- 2018.8.19, Ningbo
#
#

assert <- function(record, item, target, current) {
    
    if (TRUE == all.equal(target, current)) {
        record[1] <- record[1] + 1L
    } else {
        print(paste("ITEM:", item, "FAILED"))
    }
    record[2] <- record[2] + 1L
    return (record)
}

printer <- function(record) {
    msg <- paste("Build Failed:", as.character(record[2]-record[1]), "/", as.character(record[2]))
    print(msg, quote = FALSE)
}