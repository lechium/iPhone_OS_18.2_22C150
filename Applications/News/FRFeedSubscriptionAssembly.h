//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIWindow;

@interface FRFeedSubscriptionAssembly : NSObject
{
    UIWindow *_window;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000043d57
@property(readonly, nonatomic) UIWindow *window; // @synthesize window=_window;
- (void)loadInRegistry:(id)arg1;	// IMP=0x0010000000043bf1
- (id)initWithWindow:(id)arg1;	// IMP=0x0010000000043b65
- (id)init;	// IMP=0x0010000000043b36

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
