//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreKitUI/SKUIGiftViewController.h>

@class NSString;
@protocol ServiceAccountPageEmbeddedParent;

@interface ServiceSKUIGiftViewController : SKUIGiftViewController
{
    id <ServiceAccountPageEmbeddedParent> _embeddedParent;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000000f085
@property(nonatomic) __weak id <ServiceAccountPageEmbeddedParent> embeddedParent; // @synthesize embeddedParent=_embeddedParent;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000efc2
- (void)dismissAnimated:(_Bool)arg1;	// IMP=0x001000000000ef4f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
