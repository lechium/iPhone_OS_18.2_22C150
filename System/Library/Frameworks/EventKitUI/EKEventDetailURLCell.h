//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "EKEventDetailCell.h"

@class NSString, NSURL, SGSuggestedEventLaunchInfo, UILabel, UITextView;

__attribute__((visibility("hidden")))
@interface EKEventDetailURLCell : EKEventDetailCell
{
    UILabel *_URLTitleView;	// 24 = 0x18
    UITextView *_URLView;	// 32 = 0x20
    int _lastLayoutPosition;	// 40 = 0x28
    NSURL *_url;	// 48 = 0x30
    SGSuggestedEventLaunchInfo *_launchInfo;	// 56 = 0x38
}

+ (Class)_SGSuggestionsServiceClass;	// IMP=0x0010000000196c9c
- (void).cxx_destruct;	// IMP=0x0000000000198143
- (id)textView:(id)arg1 primaryActionForTextItem:(id)arg2 defaultAction:(id)arg3;	// IMP=0x0000000000197d6c
- (id)_URLView;	// IMP=0x0000000000197c68
- (id)_URLTitleView;	// IMP=0x0000000000197b1c
- (void)layoutForWidth:(double)arg1 position:(int)arg2;	// IMP=0x00000000001979fd
- (void)_layoutForWidth:(double)arg1 position:(int)arg2;	// IMP=0x00000000001972eb
- (void)layoutSubviews;	// IMP=0x0000000000197280
- (void)updateLinkWithLaunchInfo;	// IMP=0x0000000000197111
- (void)updateLinkWithURL;	// IMP=0x000000000019701a
- (_Bool)updateLink;	// IMP=0x0000000000196fd9
- (_Bool)update;	// IMP=0x0000000000196e96
- (void)updateWithURL:(id)arg1 launchInfo:(id)arg2;	// IMP=0x0000000000196df8
- (id)initWithEvent:(id)arg1 launchInfo:(id)arg2 editable:(_Bool)arg3 style:(long long)arg4;	// IMP=0x0000000000196d55
- (id)initWithEvent:(id)arg1 url:(id)arg2 editable:(_Bool)arg3 style:(long long)arg4;	// IMP=0x0000000000196cb2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

