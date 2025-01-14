//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString, NTHeadline;

@interface NNNewsDaemonHeadlineHeadlineWrapper : NSObject
{
    NTHeadline *_headline;	// 8 = 0x8
    NSData *_thumbnailData;	// 16 = 0x10
    NSData *_publisherLogoData;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000007c09
@property(readonly, copy, nonatomic) NSData *publisherLogoData; // @synthesize publisherLogoData=_publisherLogoData;
@property(readonly, copy, nonatomic) NSData *thumbnailData; // @synthesize thumbnailData=_thumbnailData;
@property(readonly, copy, nonatomic) NTHeadline *headline; // @synthesize headline=_headline;
@property(readonly, nonatomic) NSString *sync_NewsURLString;
@property(readonly, nonatomic) NSString *sync_publisherIdentifier;
@property(readonly, nonatomic) NSString *sync_publisherName;
@property(readonly, nonatomic) NSData *sync_publisherLogoImageData;
@property(readonly, nonatomic) NSData *sync_thumbnailImageData;
@property(readonly, nonatomic) NSString *sync_excerpt;
@property(readonly, nonatomic) NSString *sync_title;
@property(readonly, nonatomic) NSString *sync_identifier;
- (id)initWithHeadline:(id)arg1 assetFileURLsByRemoteURL:(id)arg2;	// IMP=0x00100000000076bc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

