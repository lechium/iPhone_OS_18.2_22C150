//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC20FaceTimeMessageStore20ContactChangeManager : NSObject
{
    MISSING_TYPE *analyticsManager;	// 8 = 0x8
    MISSING_TYPE *featureFlags;	// 16 = 0x10
    MISSING_TYPE *contactStore;	// 24 = 0x18
    MISSING_TYPE *userDefaults;	// 32 = 0x20
    MISSING_TYPE *delegate;	// 40 = 0x28
    MISSING_TYPE *processingNotification;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000008a8d2
- (id)init;	// IMP=0x000000000008a89c
- (void)contactStoreDidChange:(id)arg1;	// IMP=0x000000000008990e
- (void)visitDeleteContactEvent:(id)arg1;	// IMP=0x000000000008b10a
- (void)visitUpdateContactEvent:(id)arg1;	// IMP=0x000000000008af4a
- (void)visitAddContactEvent:(id)arg1;	// IMP=0x000000000008aca4
- (void)visitDropEverythingEvent:(id)arg1;	// IMP=0x000000000008aa45

@end

