//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UserNotificationsCore/NSObject-Protocol.h>

@class NSData, NSString;

@protocol UNSContentProtectionStrategy <NSObject>
- (void)migrateDataAtPath:(NSString *)arg1 toPath:(NSString *)arg2;
- (_Bool)removeItemAtPath:(NSString *)arg1 error:(id *)arg2;
- (_Bool)writeData:(NSData *)arg1 atPath:(NSString *)arg2 error:(id *)arg3;
- (NSData *)dataAtPath:(NSString *)arg1;
- (_Bool)dataIsAvailableAtPath:(NSString *)arg1;

@optional
- (void)importDataWithImportHandler:(NSData * (^)(NSData *, NSData *))arg1;
@end

