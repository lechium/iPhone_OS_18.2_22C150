//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface SCATAssistiveTouchWorkspace : NSObject
{
}

+ (id)sharedWorkspace;	// IMP=0x00200000000dd9be
- (void)pointerController:(id)arg1 didReceivePointerEvent:(id)arg2;	// IMP=0x00200000000ddc2c
- (void)accessibilityManager:(id)arg1 screenWillChange:(struct __CFData *)arg2;	// IMP=0x00100000000ddc26
- (void)accessibilityManager:(id)arg1 updateElementVisuals:(id)arg2;	// IMP=0x00100000000ddc20
- (void)accessibilityManager:(id)arg1 nativeFocusElementDidChange:(id)arg2;	// IMP=0x00100000000ddc1a
- (void)accessibilityManager:(id)arg1 didFetchElementsForEvent:(long long)arg2 foundNewElements:(_Bool)arg3;	// IMP=0x00100000000ddc14
- (void)accessibilityManager:(id)arg1 willFetchElementsForEvent:(long long)arg2;	// IMP=0x00100000000ddc0e
- (void)accessibilityManager:(id)arg1 didScheduleFetchEvent:(long long)arg2;	// IMP=0x00100000000ddc08
- (void)accessibilityManager:(id)arg1 didReceiveEvent:(long long)arg2 data:(id)arg3;	// IMP=0x00100000000ddb1a
- (MISSING_TYPE *)dealloc;	// IMP=0x00100000000ddaa5
- (id)init;	// IMP=0x00100000000dda13

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

