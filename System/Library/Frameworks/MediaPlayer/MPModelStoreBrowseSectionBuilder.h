//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPPropertySet;

__attribute__((visibility("hidden")))
@interface MPModelStoreBrowseSectionBuilder : NSObject
{
    struct {
        unsigned int initialized:1;
        unsigned int title:1;
        unsigned int type:1;
        unsigned int loadAdditionalContentURL:1;
        unsigned int previouslyRetrievedNestedResponse:1;
        unsigned int uniformContentItemType:1;
        unsigned int memberOfChartSet:1;
        unsigned int displaysAsGridCellInCarPlay:1;
        unsigned int brick:1;
    } _requestedBrowseSectionProperties;	// 8 = 0x8
    MPPropertySet *_requestedPropertySet;	// 16 = 0x10
}

+ (id)allSupportedInternalOnlyProperties;	// IMP=0x0060000000051ba8
+ (id)allSupportedPropertiesIncludingInternalOnlyProperties:(_Bool)arg1;	// IMP=0x0060000000051a9e
- (void).cxx_destruct;	// IMP=0x00000000000518b6
@property(readonly, nonatomic) MPPropertySet *requestedPropertySet; // @synthesize requestedPropertySet=_requestedPropertySet;
- (id)modelObjectWithTitle:(id)arg1 loadAdditionalContentURL:(id)arg2 uniformContentItemType:(long long)arg3 isMemberOfChartSet:(_Bool)arg4 isBrick:(_Bool)arg5 displaysAsGridCellInCarPlay:(_Bool)arg6 previouslyRetrievedNestedResponse:(id)arg7 onlyContainsEditorialElements:(_Bool)arg8 featuredContentKind:(long long)arg9 modelObject:(id)arg10;	// IMP=0x0000000000051435
- (id)modelObjectWithTitle:(id)arg1 loadAdditionalContentURL:(id)arg2 uniformContentItemType:(long long)arg3 isMemberOfChartSet:(_Bool)arg4 isBrick:(_Bool)arg5 displaysAsGridCellInCarPlay:(_Bool)arg6 previouslyRetrievedNestedResponse:(id)arg7 onlyContainsEditorialElements:(_Bool)arg8 featuredContentKind:(long long)arg9;	// IMP=0x0000000000051408
- (id)modelObjectWithTitle:(id)arg1 loadAdditionalContentURL:(id)arg2 uniformContentItemType:(long long)arg3 isMemberOfChartSet:(_Bool)arg4 isBrick:(_Bool)arg5 previouslyRetrievedNestedResponse:(id)arg6;	// IMP=0x00000000000513c6
@property(readonly, nonatomic) MPPropertySet *requestedPropertySetExcludingInternalOnlyProperties;
- (id)initWithRequestedPropertySet:(id)arg1;	// IMP=0x00000000000510f1

@end

