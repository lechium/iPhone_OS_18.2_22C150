//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface COSSOSSafetyFeature : NSObject
{
    NSString *_title;	// 8 = 0x8
    NSString *_subtitle;	// 16 = 0x10
    NSString *_assetName;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000129597
@property(copy, nonatomic) NSString *assetName; // @synthesize assetName=_assetName;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 assetName:(id)arg3;	// IMP=0x0010000000129494

@end
