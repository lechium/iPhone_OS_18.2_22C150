//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface ICDPlaybackPositionResponseDataBase : NSObject
{
    NSString *_domain;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000b2896
- (id)metadataWithItemIdentifier:(id)arg1 keyValueStorePayload:(id)arg2 failuresOkay:(_Bool)arg3;	// IMP=0x00100000000b20c3
- (id)dataByInflatingWithNoZipHeader:(id)arg1;	// IMP=0x00100000000b1d49
- (id)description;	// IMP=0x00100000000b1d10
- (id)initWithDomain:(id)arg1;	// IMP=0x00100000000b1ca5

@end
