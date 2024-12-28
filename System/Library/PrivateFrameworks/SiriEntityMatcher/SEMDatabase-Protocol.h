//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SiriEntityMatcher/NSObject-Protocol.h>

@class NSString, SEMDatabaseCommand, SEMDatabaseExecutionResult;

@protocol SEMDatabase <NSObject>
- (SEMDatabaseExecutionResult *)executeCommand:(SEMDatabaseCommand *)arg1 options:(unsigned long long)arg2;
- (int)rowsModified:(id *)arg1;
- (_Bool)cleanup:(id *)arg1;
- (_Bool)rollbackTransactionWithError:(id *)arg1;
- (_Bool)commitTransactionWithError:(id *)arg1;
- (_Bool)beginTransactionWithError:(id *)arg1;
- (_Bool)executeCommandString:(NSString *)arg1 error:(id *)arg2;
- (_Bool)closeWithError:(id *)arg1;
- (_Bool)openWithError:(id *)arg1;
- (NSString *)path;
@end
