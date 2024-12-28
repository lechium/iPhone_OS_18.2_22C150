//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FeedbackCore/NSObject-Protocol.h>

@class DEDDevice, FBKGroupedDevice, NSDictionary, NSSet, NSString;

@protocol DEDDeviceLike <NSObject>
- (_Bool)isLikeDEDDevice:(DEDDevice *)arg1;
- (void)addDevice:(DEDDevice *)arg1;
- (NSString *)hashingKey;
- (_Bool)isEqualToDevice:(FBKGroupedDevice *)arg1;
- (_Bool)hasCapabilities:(NSSet *)arg1;
- (NSDictionary *)serialize;
- (NSString *)productType;
- (NSString *)name;
- (NSString *)deviceClass;
- (NSString *)color;
- (NSString *)build;
- (NSString *)publicLogDescription;
- (_Bool)isCurrentDevice;
- (NSString *)platform;
- (NSString *)identifier;
@end
