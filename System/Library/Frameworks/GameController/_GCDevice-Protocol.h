//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GameController/NSObject-Protocol.h>

@class NSSet, NSString;
@protocol NSObject><NSCopying><NSSecureCoding, _GCDeviceManager;

@protocol _GCDevice <NSObject>
@property(readonly) NSSet *components;
@property(readonly) __weak id <_GCDeviceManager> manager;
@property(readonly, copy) id <NSObject><NSCopying><NSSecureCoding> identifier;
- (id)propertyForKey:(NSString *)arg1;
@end

