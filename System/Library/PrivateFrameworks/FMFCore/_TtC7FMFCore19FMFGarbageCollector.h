//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <swiftCore/_TtCs12_SwiftObject.h>

@class MISSING_TYPE;

@interface _TtC7FMFCore19FMFGarbageCollector : _TtCs12_SwiftObject
{
    MISSING_TYPE *garbageCollectorIdentityKey;	// 16 = 0x10
    MISSING_TYPE *accountStore;	// 32 = 0x20
    MISSING_TYPE *shouldRemoveFiles;	// 40 = 0x28
    MISSING_TYPE *isAccountVerificationPending;	// 41 = 0x29
    MISSING_TYPE *fmfAccountIdentifier;	// 48 = 0x30
    MISSING_TYPE *identifierQueue;	// 64 = 0x40
    MISSING_TYPE *delegate;	// 72 = 0x48
    MISSING_TYPE *paths;	// 88 = 0x58
}

- (void)scheduleAccountVerificationWithNotification:(id)arg1;	// IMP=0x0000000000142be0

@end
