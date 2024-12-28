//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableString, NSString;

@interface EpubRightsDataParser : NSObject
{
    NSData *_sinfData;	// 8 = 0x8
    NSMutableString *;	// 16 = 0x10
    _Bool _isSinfElement;	// 24 = 0x18
}

@property(readonly, nonatomic) NSData *sinfData; // @synthesize sinfData=_sinfData;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;	// IMP=0x00100000000c448f
- (void)parser:(id)arg1 foundCharacters:(id)arg2;	// IMP=0x00100000000c4447
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;	// IMP=0x00100000000c441d
- (void)dealloc;	// IMP=0x00100000000c43d3
- (id)initWithXMLData:(id)arg1;	// IMP=0x00100000000c4340

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
