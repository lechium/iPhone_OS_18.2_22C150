//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MailUI/NSObject-Protocol.h>

@class EMFocus, MUIMailboxFilter, MUIMailboxFilterGroup, NSArray;

@protocol MUIMailboxFilterProvider <NSObject>
@property(retain, nonatomic) MUIMailboxFilter *senderFilter;
@property(retain, nonatomic) MUIMailboxFilterGroup *individualVIPFilterGroup;
@property(readonly, nonatomic) EMFocus *focus;
@property(readonly, copy, nonatomic) NSArray *focusFilters;
@property(readonly, copy, nonatomic) NSArray *defaultFilters;
@property(readonly, copy, nonatomic) NSArray *allFilters;
@property(readonly, copy, nonatomic) NSArray *filtersGroups;
- (NSArray *)reduce:(NSArray *)arg1;
- (MUIMailboxFilterGroup *)groupContainingFilter:(MUIMailboxFilter *)arg1;
@end

