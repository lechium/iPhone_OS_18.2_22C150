//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSError, UIButton, UIImageView, UILabel;

@interface ProximityAutoFillDoneViewController
{
    _Bool _canceled;	// 32 = 0x20
    UILabel *_descriptionLabel;	// 40 = 0x28
    UIImageView *_imageView;	// 48 = 0x30
    UIButton *_reportBugButton;	// 56 = 0x38
    UILabel *_titleLabel;	// 64 = 0x40
    NSError *_error;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x002000000010a449
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
- (void)handleReportButton:(id)arg1;	// IMP=0x001000000010a396
- (void)handleDoneButtonPressed:(id)arg1;	// IMP=0x001000000010a309
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0010000000109dbb

@end

