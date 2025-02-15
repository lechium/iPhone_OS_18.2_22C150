//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, UIButton;
@protocol TransitSchedulesDeparturePickerCollectionViewCellDelegate;

@interface TransitSchedulesDeparturePickerCollectionViewCell
{
    UIButton *_picker;	// 32 = 0x20
    NSArray *_departures;	// 40 = 0x28
    id <TransitSchedulesDeparturePickerCollectionViewCellDelegate> _delegate;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00200000008046a4
@property(nonatomic) __weak id <TransitSchedulesDeparturePickerCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (id)statusStringForDeparture:(id)arg1;	// IMP=0x001000000080437f
- (void)_updateDeparturePickerWithSelectedDeparture:(id)arg1;	// IMP=0x0010000000803ed9
- (id)titleForDeparture:(id)arg1;	// IMP=0x0010000000803dd3
- (void)setSelectedDeparture:(id)arg1;	// IMP=0x0010000000803dc1
- (void)setDepartures:(id)arg1 withSelectedDeparture:(id)arg2 referenceDate:(id)arg3 timeZone:(id)arg4 timeDisplayStyle:(unsigned long long)arg5;	// IMP=0x0010000000803ce0
- (void)configureViews;	// IMP=0x0010000000803991
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0010000000803934

@end

