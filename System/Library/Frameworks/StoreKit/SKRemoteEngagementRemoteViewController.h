//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/_UIRemoteViewController.h>

@protocol SKEngagementPresenterProtocol;

__attribute__((visibility("hidden")))
@interface SKRemoteEngagementRemoteViewController : _UIRemoteViewController
{
    id <SKEngagementPresenterProtocol> _delegate;	// 8 = 0x8
}

+ (id)exportedInterface;	// IMP=0x006000000000c8fa
+ (id)serviceViewControllerInterface;	// IMP=0x006000000000c8da
- (void).cxx_destruct;	// IMP=0x000000000000cb5b
@property(nonatomic) __weak id <SKEngagementPresenterProtocol> delegate; // @synthesize delegate=_delegate;
- (void)preferredContentSizeDidChange:(struct CGSize)arg1;	// IMP=0x000000000000ca50
- (void)engagementTaskDidFinishWithResult:(id)arg1 resultData:(id)arg2 error:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000000c91a

@end

