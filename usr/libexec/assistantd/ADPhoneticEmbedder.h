//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CESRPhoneticEmbedder;

@interface ADPhoneticEmbedder : NSObject
{
    CESRPhoneticEmbedder *phoneticEmbedder;	// 8 = 0x8
}

+ (id)sharedEmbedder;	// IMP=0x0040000000330415
- (void).cxx_destruct;	// IMP=0x0020000000330636
- (void)findAlternativesForString:(id)arg1 maxResults:(int)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000033051d
- (void)preheatEuclidModelWithLanguageCode:(id)arg1 clientID:(id)arg2;	// IMP=0x001000000033049a

@end

