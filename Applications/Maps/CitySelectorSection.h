//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MKPlaceCompactCollectionSizeController, NSString;

@interface CitySelectorSection : NSObject
{
    NSString *_sectionTitle;	// 8 = 0x8
    MKPlaceCompactCollectionSizeController *_sizeController;	// 16 = 0x10
    long long _kind;	// 24 = 0x18
    CDStruct_9f748a59 _configuration;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000542e36
@property(nonatomic) long long kind; // @synthesize kind=_kind;
@property(retain, nonatomic) MKPlaceCompactCollectionSizeController *sizeController; // @synthesize sizeController=_sizeController;
@property(retain, nonatomic) NSString *sectionTitle; // @synthesize sectionTitle=_sectionTitle;
@property(nonatomic) CDStruct_f6ae2b44 configuration; // @synthesize configuration=_configuration;
- (id)layoutSectionForWorldwideUsingTraitsEnvironment:(id)arg1 usingWidth:(double)arg2;	// IMP=0x0010000000542a08
- (id)layoutSectionForCompactCollectionsUsingTraitsEnvironment:(id)arg1 usingWidth:(double)arg2;	// IMP=0x00100000005424eb
- (void)initializeSizeControllerUsingTraitEnvironment:(id)arg1;	// IMP=0x0010000000542463
- (void)setupConfiguration;	// IMP=0x00100000005423d9
- (id)layoutForSectionUsingTraitsEnvironment:(id)arg1 usingWidth:(double)arg2;	// IMP=0x0010000000542356
- (id)initWithSectionKind:(long long)arg1 usingMaxWidth:(double)arg2 usingTraitEnvironment:(id)arg3;	// IMP=0x00100000005422d2

@end
