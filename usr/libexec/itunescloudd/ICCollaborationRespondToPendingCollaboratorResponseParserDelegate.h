//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ICCollaborationRespondToPendingCollaboratorResponse, NSString;

@interface ICCollaborationRespondToPendingCollaboratorResponseParserDelegate : NSObject
{
    ICCollaborationRespondToPendingCollaboratorResponse *_collaborationResponse;	// 8 = 0x8
    unsigned int _currentContainerDAAPCode;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000001139a5
- (void)parser:(id)arg1 didStartContainerCode:(unsigned int)arg2 contentLength:(unsigned int)arg3;	// IMP=0x001000000011399c
- (void)parser:(id)arg1 didParseDataCode:(unsigned int)arg2 bytes:(char *)arg3 contentLength:(unsigned int)arg4;	// IMP=0x0010000000113973
- (_Bool)parser:(id)arg1 shouldParseCodeAsContainer:(unsigned int)arg2;	// IMP=0x0010000000113951
- (_Bool)parser:(id)arg1 shouldParseCode:(unsigned int)arg2;	// IMP=0x00100000001138fe
- (id)initWithResponse:(id)arg1;	// IMP=0x00100000001138a4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

