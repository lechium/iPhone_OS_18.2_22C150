//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HSNetworkInterfaceManager, NSString;

@interface HSPCDetectedViewController
{
    _Bool _firstDetectedCard;	// 8 = 0x8
    HSNetworkInterfaceManager *_networkInterfaceManager;	// 16 = 0x10
}

+ (id)viewControllerForCoordinator:(id)arg1 config:(id)arg2;	// IMP=0x0040000000014451
- (void).cxx_destruct;	// IMP=0x0020000000015923
@property(retain, nonatomic) HSNetworkInterfaceManager *networkInterfaceManager; // @synthesize networkInterfaceManager=_networkInterfaceManager;
@property(readonly, nonatomic, getter=isFirstDetectedCard) _Bool firstDetectedCard; // @synthesize firstDetectedCard=_firstDetectedCard;
- (id)commitConfiguration;	// IMP=0x001000000001519d
@property(readonly, nonatomic) NSString *prominentButtonLocalizedTitle;
- (id)iconDescriptor;	// IMP=0x0010000000014f0d
- (id)handleInstallationGuideURL;	// IMP=0x0010000000014e5f
- (id)initWithCenterContentView:(id)arg1;	// IMP=0x0010000000014e30
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0010000000014d26
- (id)initWithCoordinator:(id)arg1 config:(id)arg2;	// IMP=0x001000000001463f

@end
