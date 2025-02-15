//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL, UIColor;

__attribute__((visibility("hidden")))
@interface SUUIOnboardingAffiliationItem : NSObject
{
    UIColor *_fillColor;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
    NSString *_imageName;	// 24 = 0x18
    NSString *_imageTreatment;	// 32 = 0x20
    NSURL *_imageURL;	// 40 = 0x28
    NSString *_title;	// 48 = 0x30
    long long _userAffinityCount;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000324f45
@property(nonatomic) long long userAffinityCount; // @synthesize userAffinityCount=_userAffinityCount;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(copy, nonatomic) NSString *imageTreatment; // @synthesize imageTreatment=_imageTreatment;
@property(copy, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000324dea
- (unsigned long long)hash;	// IMP=0x0000000000324dd4
- (id)description;	// IMP=0x0000000000324d4a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000324c89

@end

