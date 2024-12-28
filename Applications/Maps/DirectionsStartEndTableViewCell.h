//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class DirectionsStartEndContentView, NSString;

@interface DirectionsStartEndTableViewCell
{
    DirectionsStartEndContentView *_startEndView;	// 8 = 0x8
    _Bool _alignSeparatorWithLeadingText;	// 16 = 0x10
}

+ (Class)startEndViewClass;	// IMP=0x0020000000389a18
+ (id)reuseIdentifier;	// IMP=0x0010000000389a06
+ (CDStruct_afa449f9)cellMetricsForIdiom:(long long)arg1;	// IMP=0x00100000003899a8
- (void).cxx_destruct;	// IMP=0x0020000000389f75
@property(nonatomic) _Bool alignSeparatorWithLeadingText; // @synthesize alignSeparatorWithLeadingText=_alignSeparatorWithLeadingText;
- (void)setIsDimmedStep:(_Bool)arg1;	// IMP=0x0010000000389f48
- (double)heightForWaypoint:(id)arg1 route:(id)arg2 selectedVehicle:(id)arg3 displayedInRoutePlanning:(_Bool)arg4 width:(double)arg5;	// IMP=0x0010000000389f28
- (void)configureForWaypoint:(id)arg1 route:(id)arg2 selectedVehicle:(id)arg3 displayedInRoutePlanning:(_Bool)arg4;	// IMP=0x0010000000389f0b
- (struct CGRect)_separatorFrame;	// IMP=0x0010000000389cdb
- (void)prepareForReuse;	// IMP=0x0010000000389bf8
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0010000000389a29

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
