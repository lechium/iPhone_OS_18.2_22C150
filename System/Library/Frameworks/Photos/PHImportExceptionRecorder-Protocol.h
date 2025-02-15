//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Photos/NSObject-Protocol.h>

@class NSArray, NSError, NSMutableArray, NSString, PHImportException;

@protocol PHImportExceptionRecorder <NSObject>
@property(readonly, nonatomic) NSMutableArray *exceptions;
- (NSString *)logForExceptions;
- (void)addExceptions:(NSArray *)arg1;
- (void)addException:(PHImportException *)arg1;
- (PHImportException *)addExceptionWithType:(long long)arg1 path:(NSString *)arg2 underlyingError:(NSError *)arg3 file:(char *)arg4 line:(unsigned long long)arg5;
@end

