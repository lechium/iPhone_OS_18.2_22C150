//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSXPCConnection;

@interface PBUserActivityServicer : NSObject
{
    NSXPCConnection *_UAToPasteboardConnection;	// 8 = 0x8
}

+ (id)newServicerForConnection:(id)arg1;	// IMP=0x0020000000012d92
- (void).cxx_destruct;	// IMP=0x0020000000012f7f
@property(nonatomic) __weak NSXPCConnection *UAToPasteboardConnection; // @synthesize UAToPasteboardConnection=_UAToPasteboardConnection;
- (void)pasteboardWillBeFetched:(CDUnknownBlockType)arg1;	// IMP=0x0010000000012eeb
- (void)remotePasteboardAvailable:(_Bool)arg1;	// IMP=0x0010000000012e9a
- (id)initWithConnection:(id)arg1;	// IMP=0x0010000000012ddb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

