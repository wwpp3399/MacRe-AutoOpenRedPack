//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQBaseSingleton.h"

#import "NSWindowDelegate.h"

@class NSMutableArray, NSString;

@interface WebViewWindowManager : QQBaseSingleton <NSWindowDelegate>
{
    NSMutableArray *_windows;
}

- (void).cxx_destruct;
- (id)showOAWebViewWindow;
- (id)findWebViewWindowControllerByUrl:(id)arg1;
- (id)baseWebViewWindowController;
- (void)resetWindowPosition:(id)arg1;
- (id)showNewWebViewWindow:(id)arg1 isBase:(BOOL)arg2;
- (void)windowWillClose:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
