//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class LPLinkMetadata, NSURL;

@interface IMAssistantURLWithMetadata : NSObject
{
    NSURL *_url;	// 8 = 0x8
    LPLinkMetadata *_metadata;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000001d0d
@property(retain, nonatomic) LPLinkMetadata *metadata; // @synthesize metadata=_metadata;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
- (id)initWithURL:(id)arg1 metadata:(id)arg2;	// IMP=0x0000000000001c3e

@end
