//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CUIKCalendarModel, EKEventDetailAttendeesCell, EKEventDetailAttendeesCellModel, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface EKEventAttendeesDetailItem
{
    EKEventDetailAttendeesCell *_cell;	// 48 = 0x30
    CUIKCalendarModel *_model;	// 56 = 0x38
    EKEventDetailAttendeesCellModel *_attendeesModel;	// 64 = 0x40
    EKEventDetailAttendeesCell *_oldCell;	// 72 = 0x48
    long long _status;	// 80 = 0x50
    NSArray *_attendees;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x000000000008ff38
@property(retain, nonatomic) NSArray *attendees; // @synthesize attendees=_attendees;
@property(nonatomic) long long status; // @synthesize status=_status;
- (void)eventDetailAttendeeCellDidCompleteLoad:(id)arg1;	// IMP=0x000000000008fe73
- (void)eventDetailAttendeeCellWantsRefreshForHeightChange;	// IMP=0x000000000008fe36
- (id)detailViewControllerWithFrame:(struct CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2;	// IMP=0x000000000008fd84
- (_Bool)hasDetailViewControllerAtIndex:(unsigned long long)arg1;	// IMP=0x000000000008fd64
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;	// IMP=0x000000000008fc22
- (_Bool)configureWithCalendar:(id)arg1 preview:(_Bool)arg2;	// IMP=0x000000000008fc02
- (void)eventViewController:(id)arg1 didSelectSubitem:(unsigned long long)arg2;	// IMP=0x000000000008fbd3
- (unsigned long long)numberOfSubitems;	// IMP=0x000000000008fbc8
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2 forceUpdate:(_Bool)arg3;	// IMP=0x000000000008fb78
- (void)reset;	// IMP=0x000000000008fafc
- (id)initWithModel:(id)arg1;	// IMP=0x000000000008fa8e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
