//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapKit/MKAnnotationView.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface HKDotAnnotationView : MKAnnotationView
{
    UIColor *_dotColor;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000002bd1cc
@property(retain, nonatomic) UIColor *dotColor; // @synthesize dotColor=_dotColor;
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x00000000002bd0c2
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00000000002bd074

@end
