//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSError, NSString;
@protocol SHCustomCatalogStorage;

__attribute__((visibility("hidden")))
@interface SHJSONLCustomCatalogTransformer : NSObject
{
    id <SHCustomCatalogStorage> _delegate;	// 8 = 0x8
    NSError *_error;	// 16 = 0x10
    NSDictionary *_header;	// 24 = 0x18
}

+ (id)outputFileHeader;	// IMP=0x001000000001a4f1
+ (id)catalogFileRepresentationOfMediaItems:(id)arg1 withID:(id)arg2 error:(id *)arg3;	// IMP=0x001000000001a1a5
+ (id)catalogFileRepresentationOfSignature:(id)arg1 withID:(id)arg2;	// IMP=0x001000000001a093
+ (id)signatureFromFileRow:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000019ebf
+ (id)mediaItemFromFileRow:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000019e24
+ (id)headerFromFileRow:(id)arg1;	// IMP=0x0010000000019e0e
+ (id)IDFromFileRow:(id)arg1;	// IMP=0x0010000000019df2
+ (_Bool)objectIsSignature:(id)arg1;	// IMP=0x0010000000019cf7
+ (_Bool)objectIsMediaItem:(id)arg1;	// IMP=0x0010000000019bfc
+ (_Bool)objectIsHeader:(id)arg1;	// IMP=0x0010000000019b01
- (void).cxx_destruct;	// IMP=0x000000000001a5f0
@property(retain, nonatomic) NSDictionary *header; // @synthesize header=_header;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) __weak id <SHCustomCatalogStorage> delegate; // @synthesize delegate=_delegate;
- (_Bool)parsedJSONObject:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000197cc
- (void)reset;	// IMP=0x000000000001979a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

