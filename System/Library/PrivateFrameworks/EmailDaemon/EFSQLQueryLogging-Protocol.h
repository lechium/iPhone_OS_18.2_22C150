//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <EmailDaemon/NSObject-Protocol.h>

@class NSString;

@protocol EFSQLQueryLogging <NSObject>
- (void)submitQueryLogData;
- (void)logQueryString:(NSString *)arg1 label:(NSString *)arg2 firstRowExecutionTimeInNanoseconds:(unsigned long long)arg3 totalExecutionTimeInNanoseconds:(unsigned long long)arg4 numberOfRows:(unsigned long long)arg5;
@end

