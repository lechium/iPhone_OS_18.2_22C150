//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IMSharedUtilities/IMFocusStateManager.h>

@interface IMFocusStateManager (ChatKit)
- (void)updateFocusStateForCurrentFocusFilterActionAsync;	// IMP=0x00900000002b9804
- (_Bool)senderMatchesActiveFocusModeForMessage:(id)arg1;	// IMP=0x00900000002b96f4
- (_Bool)chatMatchesActiveFocusMode:(id)arg1;	// IMP=0x00900000002b96a0
- (_Bool)conversationMatchesActiveFocusMode:(id)arg1;	// IMP=0x00900000002b964a
- (void)updateFocusStateForCurrentFocusFilterAction:(void (^)(void))arg1;	// IMP=0x00900000007b6ad0
@end
