//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, VKCustomFeature;

__attribute__((visibility("hidden")))
@interface VKClusterFeatureAnnotation : NSObject
{
    CDStruct_2c43369c _coordinate;	// 8 = 0x8
    VKCustomFeature *_customFeature;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000ee1270
@property(nonatomic) CDStruct_2c43369c coordinate; // @synthesize coordinate=_coordinate;
- (id)feature;	// IMP=0x0000000000ee1240
- (id)initWithClusterNode:(void *)arg1 clusterTree:(const void *)arg2 baseStyle:(const void *)arg3 imageText:(id)arg4 annotationText:(id)arg5 annotationLocale:(id)arg6;	// IMP=0x0000000000edf940

// Remaining properties
@property(nonatomic) double course;
// Preceding property had unknown attributes: ?
// Original attribute string: Td,?,N

@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

