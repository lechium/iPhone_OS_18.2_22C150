//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class MFMessageComposeViewController, NSString;

@interface PKServiceSubcredentialMessageComposeViewController : UIViewController
{
    MFMessageComposeViewController *_messageComposeViewController;	// 8 = 0x8
}

+ (id)_remoteViewControllerInterface;	// IMP=0x0020000000001e16
+ (id)_exportedInterface;	// IMP=0x0010000000001e0c
- (void).cxx_destruct;	// IMP=0x00200000000021a9
@property(retain, nonatomic) MFMessageComposeViewController *messageComposeViewController; // @synthesize messageComposeViewController=_messageComposeViewController;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;	// IMP=0x0010000000002118
- (void)setSharingRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000001f10
- (void)setDisplayPropertiesWithScreenSize:(struct CGSize)arg1 scale:(double)arg2;	// IMP=0x0010000000001e2b
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x0010000000001e20
- (id)init;	// IMP=0x0010000000001d97

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

