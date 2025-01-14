//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray, NSNumber;

@interface UISDShareSheetSessionConfiguration : NSObject
{
    _Bool _wantsAnimation;	// 8 = 0x8
    _Bool _reloadData;	// 9 = 0x9
    _Bool _shouldBlockPresentation;	// 10 = 0xa
    NSNumber *_nearbyCountSlotID;	// 16 = 0x10
    NSNumber *_nearbyCountBadge;	// 24 = 0x18
    NSArray *_peopleProxies;	// 32 = 0x20
    MISSING_TYPE *_shareProxies;	// 40 = 0x28
    NSArray *_actionProxies;	// 48 = 0x30
    NSArray *_peopleSuggestions;	// 56 = 0x38
    NSArray *_restrictedActivityTypes;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000041944
- (void).cxx_destruct;	// IMP=0x002000000004210b
@property(nonatomic) _Bool shouldBlockPresentation; // @synthesize shouldBlockPresentation=_shouldBlockPresentation;
@property(copy, nonatomic) NSArray *restrictedActivityTypes; // @synthesize restrictedActivityTypes=_restrictedActivityTypes;
@property(copy, nonatomic) NSArray *peopleSuggestions; // @synthesize peopleSuggestions=_peopleSuggestions;
@property(nonatomic) _Bool reloadData; // @synthesize reloadData=_reloadData;
@property(nonatomic) _Bool wantsAnimation; // @synthesize wantsAnimation=_wantsAnimation;
@property(retain, nonatomic) NSArray *actionProxies; // @synthesize actionProxies=_actionProxies;
@property(retain, nonatomic) NSArray *shareProxies; // @synthesize shareProxies=_shareProxies;
@property(retain, nonatomic) NSArray *peopleProxies; // @synthesize peopleProxies=_peopleProxies;
@property(retain, nonatomic) NSNumber *nearbyCountBadge; // @synthesize nearbyCountBadge=_nearbyCountBadge;
@property(retain, nonatomic) NSNumber *nearbyCountSlotID; // @synthesize nearbyCountSlotID=_nearbyCountSlotID;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000041daf
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000004194c

@end

