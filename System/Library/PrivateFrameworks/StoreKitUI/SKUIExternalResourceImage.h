//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSBundle, NSString;

__attribute__((visibility("hidden")))
@interface SKUIExternalResourceImage : NSObject
{
    _Bool _alwaysTemplate;	// 8 = 0x8
    NSString *_imageName;	// 16 = 0x10
    NSBundle *_bundle;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000192be
@property(nonatomic) _Bool alwaysTemplate; // @synthesize alwaysTemplate=_alwaysTemplate;
@property(retain, nonatomic) NSBundle *bundle; // @synthesize bundle=_bundle;
@property(copy, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;

@end

