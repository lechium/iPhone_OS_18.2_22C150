//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BackBoardHIDEventFoundation/NSObject-Protocol.h>

@class BKSHIDEventSenderDescriptor, NSDictionary;

@protocol BKIOHIDServicePersistentPropertyHandling <NSObject>
- (long long)setPersistentProperties:(NSDictionary *)arg1 forServicesMatchingDescriptor:(BKSHIDEventSenderDescriptor *)arg2;
- (_Bool)handlesPersistentPropertiesForSenderDescriptor:(BKSHIDEventSenderDescriptor *)arg1;
@end
