//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface CNWarningHeaderFooterView
{
    _Bool _shouldDisplayWarningIcon;	// 8 = 0x8
    NSString *_warningText;	// 16 = 0x10
}

+ (id)exclamationMark;	// IMP=0x0060000000239247
- (void).cxx_destruct;	// IMP=0x000000000023960e
@property(retain, nonatomic) NSString *warningText; // @synthesize warningText=_warningText;
@property(nonatomic) _Bool shouldDisplayWarningIcon; // @synthesize shouldDisplayWarningIcon=_shouldDisplayWarningIcon;
- (id)warningAttributedText;	// IMP=0x00000000002392e8

@end
