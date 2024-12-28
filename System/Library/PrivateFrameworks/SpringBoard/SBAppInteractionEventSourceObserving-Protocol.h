//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@class NSSet, NSString, SBBookmark, SBLayoutElement, SBMainDisplayLayoutState;
@protocol SBAppInteractionEventSourceProviding;

@protocol SBAppInteractionEventSourceObserving <NSObject>

@optional
- (void)eventSource:(id <SBAppInteractionEventSourceProviding>)arg1 didFinishTransitionToMode:(long long)arg2 withLayoutState:(SBMainDisplayLayoutState *)arg3 activatingElement:(SBLayoutElement *)arg4 triggeredBy:(long long)arg5;
- (void)eventSource:(id <SBAppInteractionEventSourceProviding>)arg1 didBeginTransitionToMode:(long long)arg2 withLayoutState:(SBMainDisplayLayoutState *)arg3 activatingElement:(SBLayoutElement *)arg4 triggeredBy:(long long)arg5;
- (void)eventSource:(id <SBAppInteractionEventSourceProviding>)arg1 userTouchedApplication:(NSString *)arg2 pid:(int)arg3 inContext:(unsigned int)arg4;
- (void)eventSource:(id <SBAppInteractionEventSourceProviding>)arg1 keyboardFocusChangedToApplication:(NSString *)arg2;
- (void)eventSource:(id <SBAppInteractionEventSourceProviding>)arg1 userTouchedApplication:(NSString *)arg2;
- (void)eventSource:(id <SBAppInteractionEventSourceProviding>)arg1 userDeletedWebBookmark:(SBBookmark *)arg2;
- (void)eventSource:(id <SBAppInteractionEventSourceProviding>)arg1 applicationsBecameVisible:(NSSet *)arg2;
- (void)eventSource:(id <SBAppInteractionEventSourceProviding>)arg1 applicationsBecameHidden:(NSSet *)arg2;
- (void)eventSource:(id <SBAppInteractionEventSourceProviding>)arg1 userQuitApplicationInSwitcher:(NSString *)arg2;
- (void)eventSource:(id <SBAppInteractionEventSourceProviding>)arg1 userDeletedApplications:(NSSet *)arg2;
- (void)eventSource:(id <SBAppInteractionEventSourceProviding>)arg1 userRemovedSuggestions:(NSSet *)arg2;
@end
