//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UILabel.h>

@class NSAttributedString, NSString;

@interface UILabel (MUXCrossPlatformOperations)
+ (id)_mapsui_defaultLabel;	// IMP=0x001000000011ca32
+ (double)_mapsui_maximumHeightWithFont:(id)arg1 numberOfLines:(long long)arg2 displayScale:(double)arg3;	// IMP=0x001000000013fcf6
@property(nonatomic) long long _mapsui_numberOfLines;
@property(copy, nonatomic) NSAttributedString *_mapsui_attributedText;
@property(copy, nonatomic) NSString *_mapsui_text;
@property(readonly, nonatomic) double idealWidth;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
