//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIColor, _TtC4Maps31RAPNotificationDetailsViewModel;

@interface RAPNotificationDescriptionViewModel : NSObject
{
    _TtC4Maps31RAPNotificationDetailsViewModel *_detailsViewModel;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000031e7c4
- (_Bool)shouldDisplayLink;	// IMP=0x001000000031e731
@property(readonly, copy, nonatomic) NSString *linkButtonLink;
@property(readonly, copy, nonatomic) NSString *linkButtonText;
@property(readonly, copy, nonatomic) NSString *descriptionText;
@property(readonly, copy, nonatomic) NSString *titleText;
@property(readonly, copy, nonatomic) UIColor *imageBackgroundColor;
@property(readonly, copy, nonatomic) NSString *imageName;
- (id)initWithRAPNotificationDetailsViewModel:(id)arg1;	// IMP=0x001000000031e54a

@end
