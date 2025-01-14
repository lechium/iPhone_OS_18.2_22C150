//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapKit/MKMultiPartLabel.h>

@class NSString, UIFont;

@interface MapsThemeMultiPartLabel : MKMultiPartLabel
{
    CDUnknownBlockType _textColorProvider;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000d5f2b7
@property(copy, nonatomic) CDUnknownBlockType textColorProvider; // @synthesize textColorProvider=_textColorProvider;
- (void)_updateTextColor;	// IMP=0x0010000000d5f1aa
- (void)updateTheme;	// IMP=0x0010000000d5f138
- (void)didMoveToWindow;	// IMP=0x0010000000d5f0ca
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0010000000d5efa7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(retain, nonatomic) UIFont *font;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

