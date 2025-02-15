//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class NSData, NSDictionary, NSString;

@protocol HMMTRDeviceControllerStorageDataSource <NSObject>
- (_Bool)removeValueForKey:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (_Bool)setValue:(NSData *)arg1 forKey:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
- (NSData *)valueForKey:(NSString *)arg1;

@optional
- (_Bool)setKeyValuePairs:(NSDictionary *)arg1 completion:(void (^)(NSError *))arg2;
- (NSDictionary *)allKeyValuePairs;
@end

