//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, VKTrafficIncidentFeature;

@interface MacTrafficIncidentsOverviewCellModel : NSObject
{
    VKTrafficIncidentFeature *_incident;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000d14389
@property(retain, nonatomic) VKTrafficIncidentFeature *incident; // @synthesize incident=_incident;
@property(readonly, nonatomic) _Bool hasDataToShow;
@property(readonly, nonatomic) NSString *overviewText;
- (id)initWithVKTrafficIncidentFeature:(id)arg1;	// IMP=0x0010000000d141c5

@end

