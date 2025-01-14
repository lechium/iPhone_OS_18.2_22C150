//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCountedSet, NSString;

@interface AKStatistics : NSObject
{
    NSString *_documentType;	// 8 = 0x8
    NSString *_clientPrefix;	// 16 = 0x10
    NSCountedSet *_annotationsCounts;	// 24 = 0x18
}

+ (id)nameForAnnotation:(id)arg1;	// IMP=0x00600000000be477
+ (id)nameForClassName:(id)arg1;	// IMP=0x00600000000be402
- (void).cxx_destruct;	// IMP=0x00000000000be5e5
@property(retain, nonatomic) NSCountedSet *annotationsCounts; // @synthesize annotationsCounts=_annotationsCounts;
@property(retain, nonatomic) NSString *clientPrefix; // @synthesize clientPrefix=_clientPrefix;
@property(retain, nonatomic) NSString *documentType; // @synthesize documentType=_documentType;
- (void)logDocumentSaved;	// IMP=0x00000000000be1c0
- (void)logShapeDetectionHUDPickedShape:(id)arg1;	// IMP=0x00000000000be0e8
- (void)logShapeDetectionHUDShown;	// IMP=0x00000000000be05d
- (void)_logCoreAnalyticsAnnotationCreateActionForAnnotationType:(id)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000000bde51
- (void)_logCoreAnalyticsHUDPickActionForAnnotationType:(id)arg1;	// IMP=0x00000000000bdc8d
- (void)_logCoreAnalyticsAction:(id)arg1;	// IMP=0x00000000000bdae3
- (void)logInkAnnotationStrokeAdded:(id)arg1;	// IMP=0x00000000000bd9e7
- (void)logAnnotationAdded:(id)arg1;	// IMP=0x00000000000bd884
- (void)resetLogging;	// IMP=0x00000000000bd831

@end

