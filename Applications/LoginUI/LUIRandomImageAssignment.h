//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface LUIRandomImageAssignment : NSObject
{
    NSArray *_imageURLs;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x00400000000396a6
- (void).cxx_destruct;	// IMP=0x002000000003a03f
@property(retain, nonatomic) NSArray *imageURLs; // @synthesize imageURLs=_imageURLs;
- (void);	// IMP=0x0010000000039d0b
- (void)downloadURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000399f8
- (id)init;	// IMP=0x00100000000396fb

@end

