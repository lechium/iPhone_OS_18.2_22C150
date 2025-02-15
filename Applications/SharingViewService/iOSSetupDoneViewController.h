//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSError, UIButton, UILabel;

@interface iOSSetupDoneViewController
{
    UILabel *_titleLabel;	// 32 = 0x20
    UILabel *_infoLabel;	// 40 = 0x28
    UIButton *_reportBugButton;	// 48 = 0x30
    UIButton *_doneButton;	// 56 = 0x38
    NSError *_error;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00200000000f4e6d
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
- (void)handleReportBugButton:(id)arg1;	// IMP=0x00100000000f4a6e
- (void)handleDismissButton:(id)arg1;	// IMP=0x00100000000f49e6
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00100000000f4964
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00100000000f4622
- (_Bool)_canShowWhileLocked;	// IMP=0x00100000000f461a

@end

