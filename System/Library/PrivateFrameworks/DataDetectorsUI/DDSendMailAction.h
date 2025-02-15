//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "DDAction.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface DDSendMailAction : DDAction
{
}

+ (id)matchingSchemes;	// IMP=0x0010000000048618
- (_Bool)canBePerformedByOpeningURL;	// IMP=0x0000000000049354
- (void)performFromView:(id)arg1;	// IMP=0x0000000000049334
- (int)interactionType;	// IMP=0x000000000004932c
- (id)notificationURL;	// IMP=0x0000000000049314
- (id)notificationIconBundleIdentifier;	// IMP=0x0000000000049166
- (id)notificationTitle;	// IMP=0x0000000000048fb2
- (id)compactTitle;	// IMP=0x0000000000048e5c
- (id)iconName;	// IMP=0x000000000004881a
- (id)localizedName;	// IMP=0x0000000000048802
- (id)extractedActionSubtitle;	// IMP=0x000000000004866c
- (_Bool)menuItemNameCanFallbackToServiceName;	// IMP=0x0000000000048664
- (id)serviceName;	// IMP=0x0000000000048652
- (id)_serviceIdentifier;	// IMP=0x0000000000048645
- (id)handleString;	// IMP=0x0000000000048625

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

