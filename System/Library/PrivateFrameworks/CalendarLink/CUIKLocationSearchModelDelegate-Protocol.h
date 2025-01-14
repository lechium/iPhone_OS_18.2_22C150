//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CUIKConferenceRoom, CUIKLocationSearchModel, CalDateRange, EKSource, EKStructuredLocation, NSError, NSString;

@protocol CUIKLocationSearchModelDelegate
- (void)locationSearchModel:(CUIKLocationSearchModel *)arg1 updatedSearchTypes:(unsigned long long)arg2;
- (_Bool)shouldIncludeConferenceRoom:(CUIKConferenceRoom *)arg1;
- (void)locationSearchModel:(CUIKLocationSearchModel *)arg1 selectedLocation:(EKStructuredLocation *)arg2 withError:(NSError *)arg3;
- (CalDateRange *)dateRangeForSearchModel:(CUIKLocationSearchModel *)arg1;
- (_Bool)shouldIssueAvailabilityRequestForSearchModel:(CUIKLocationSearchModel *)arg1;
- (EKSource *)sourceForSearchModel:(CUIKLocationSearchModel *)arg1;
- (NSString *)eventIDForSearchModel:(CUIKLocationSearchModel *)arg1;
@end

