//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "iTermApplicationDelegate.h"
#import "iTermGraphCodable.h"
#import "iTermOrphanServerAdopterDelegate.h"
#import "iTermPasswordManagerDelegate.h"
#import "iTermRestorableStateControllerDelegate.h"
#import "iTermUntitledWindowStateMachineDelegate.h"

@class NSArray, NSDate, NSMenu, NSMenuItem, NSString, SUUpdater, iTermFocusFollowsMouseController, iTermGlobalScopeController, iTermGlobalSearchWindowController, iTermPasswordManagerWindowController, iTermRestorableStateController, iTermScriptsMenuController, iTermUntitledWindowStateMachine;

@interface iTermApplicationDelegate : NSObject <iTermGraphCodable, iTermOrphanServerAdopterDelegate, iTermPasswordManagerDelegate, iTermRestorableStateControllerDelegate, iTermUntitledWindowStateMachineDelegate, iTermApplicationDelegate>
{
    iTermPasswordManagerWindowController *_passwordManagerWindowController;
    NSMenu *bookmarkMenu;
    NSMenu *toolbeltMenu;
    NSMenuItem *downloadsMenu_;
    NSMenuItem *uploadsMenu_;
    NSMenuItem *selectTab;
    NSMenuItem *closeTab;
    NSMenuItem *closeWindow;
    NSMenuItem *irPrev;
    NSMenuItem *windowArrangements_;
    NSMenuItem *windowArrangementsAsTabs_;
    NSMenuItem *_installPythonRuntime;
    NSMenu *_buriedSessions;
    NSMenu *_statusIconBuriedSessions;
    NSMenu *_scriptsMenu;
    NSMenuItem *_composerMenuItem;
    NSMenuItem *showFullScreenTabs;
    NSMenuItem *useTransparency;
    NSMenuItem *maximizePane;
    SUUpdater *suUpdater;
    NSMenuItem *_showTipOfTheDay;
    BOOL quittingBecauseLastWindowClosed_;
    NSMenuItem *_splitHorizontallyWithCurrentProfile;
    NSMenuItem *_splitVerticallyWithCurrentProfile;
    NSMenuItem *_splitHorizontally;
    NSMenuItem *_splitVertically;
    BOOL quiet_;
    NSDate *launchTime_;
    NSString *token_;
    BOOL finishedLaunching_;
    BOOL userHasInteractedWithAnySession_;
    id <NSObject> _appNapStoppingActivity;
    BOOL _sparkleRestarting;
    BOOL _orphansAdopted;
    NSArray *_buriedSessionsState;
    iTermScriptsMenuController *_scriptsMenuController;
    BOOL _disableTermination;
    iTermFocusFollowsMouseController *_focusFollowsMouseController;
    iTermGlobalScopeController *_globalScopeController;
    iTermRestorableStateController *_restorableStateController;
    iTermUntitledWindowStateMachine *_untitledWindowStateMachine;
    iTermGlobalSearchWindowController *_globalSearchWindowController;
    BOOL _workspaceSessionActive;
}

@property(readonly, nonatomic) BOOL sparkleRestarting; // @synthesize sparkleRestarting=_sparkleRestarting;
@property(nonatomic) BOOL workspaceSessionActive; // @synthesize workspaceSessionActive=_workspaceSessionActive;
- (void)untitledWindowStateMachineCreateNewWindow:(id)arg1;
- (void)restorableStateRestoreApplicationStateWithRecord:(id)arg1;
- (BOOL)encodeGraphWithEncoder:(id)arg1;
- (void)restorableStateEncodeWithCoder:(id)arg1 window:(id)arg2;
- (void)restorableStateRestoreWithRecord:(id)arg1 identifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)restorableStateRestoreWithCoder:(id)arg1 identifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)restorableStateWindowNeedsRestoration:(id)arg1;
- (id)restorableStateWindows;
- (void)makeSessionWithConnection:(CDStruct_b0cac789)arg1 windowController:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)orphanServerAdopterOpenSessionForConnection:(CDStruct_b0cac789)arg1 inWindow:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)windowDidChangeKeyStatus:(id)arg1;
- (void)currentSessionDidChange;
- (BOOL)iTermPasswordManagerCanBroadcast;
- (BOOL)iTermPasswordManagerCanEnterPassword;
- (void)iTermPasswordManagerEnterUserName:(id)arg1 broadcast:(BOOL)arg2;
- (BOOL)iTermPasswordManagerCanEnterUserName;
- (void)iTermPasswordManagerEnterPassword:(id)arg1 broadcast:(BOOL)arg2;
- (void)newSessionInWindowAtIndex:(id)arg1;
- (id)responderForMenuItem:(id)arg1;
- (id)allResponders;
- (void)restoreBuriedSessionsState;
- (void)hideStuckToolTips;
- (void)changePasteSpeedBy:(double)arg1 bytesKey:(id)arg2 defaultBytes:(int)arg3 delayKey:(id)arg4 defaultDelay:(float)arg5;
- (void)hideToolTipsInView:(id)arg1;
- (BOOL)possiblyTmuxValueForWindow:(BOOL)arg1 cancel:(char *)arg2;
- (id)currentProfileHotkey;
- (void)updateScreenParametersInAllTerminals;
- (id)terminalToOpenFileIn;
- (void)updateProcessType;
- (void)loadRecording:(id)arg1;
- (void)openSourceLicenses:(id)arg1;
- (void)gpuRendererAvailability:(id)arg1;
- (id)gpuUnavailableStringForReason:(unsigned long long)arg1;
- (void)openDashboard:(id)arg1;
- (void)showTipOfTheDay:(id)arg1;
- (void)enableMarkAlertPostsNotification:(id)arg1;
- (void)enableMarkAlertShowsModalAlert:(id)arg1;
- (void)toggleUseBackgroundPatternIndicator:(id)arg1;
- (void)editCurrentSession:(id)arg1;
- (void)saveCurrentWindowAsArrangement:(id)arg1;
- (void)saveWindowArrangement:(id)arg1;
- (void)newPythonScript:(id)arg1;
- (void)importScript:(id)arg1;
- (void)exportScript:(id)arg1;
- (void)revealScriptsInFinder:(id)arg1;
- (void)openScriptConsole:(id)arg1;
- (void)openDependencyEditor:(id)arg1;
- (void)openREPL:(id)arg1;
- (void)buildScriptMenu:(id)arg1;
- (void)installPythonRuntime:(id)arg1;
@property(readonly, nonatomic) iTermScriptsMenuController *scriptsMenuController;
- (void)showHelp:(id)arg1;
- (void)clearAllUploads:(id)arg1;
- (void)clearAllDownloads:(id)arg1;
- (void)showAbout:(id)arg1;
- (void)openQuickly:(id)arg1;
- (void)debugLogging:(id)arg1;
- (void)toggleSecureInput:(id)arg1;
- (void)toggleUseTransparency:(id)arg1;
- (void)maximizePane:(id)arg1;
- (void)toggleMultiLinePasteWarning:(id)arg1;
- (void)undo:(id)arg1;
- (void)pasteSlowlySlower:(id)arg1;
- (void)pasteSlowlyFaster:(id)arg1;
- (void)pasteSlower:(id)arg1;
- (void)pasteFaster:(id)arg1;
- (void)showBookmarkWindow:(id)arg1;
- (void)showAndOrderFrontRegardlessPrefWindow:(id)arg1;
- (void)showPrefWindow:(id)arg1;
- (void)arrangeSplitPanesEvenly:(id)arg1;
- (void)arrangeHorizontally:(id)arg1;
- (void)newSession:(id)arg1;
- (void)newSessionWithSameProfile:(id)arg1;
- (void)newWindow:(id)arg1;
- (void)toggleFullScreenTabBar:(id)arg1;
- (void)toggleToolbeltTool:(id)arg1;
- (void)openPasswordManager:(id)arg1;
- (void)togglePinHotkeyWindow:(id)arg1;
- (void)restoreWindowArrangementAsTabs:(id)arg1;
- (void)restoreWindowArrangement:(id)arg1;
- (void)unmakeDefaultTerminal:(id)arg1;
- (void)makeDefaultTerminal:(id)arg1;
- (void)promptToConvertTabsToSpacesWhenPasting:(id)arg1;
- (void)findGlobally:(id)arg1;
- (void)reloadSessionMenus:(id)arg1;
- (void)_removeItemsFromMenu:(id)arg1;
- (void)buildSessionSubmenu:(id)arg1;
- (void)_addArrangementsMenuTo:(id)arg1;
- (id)bookmarksMenu;
- (void)newSessionMenu:(id)arg1 title:(id)arg2 selector:(SEL)arg3 openAllSelector:(SEL)arg4;
- (void)addMenuItemView:(id)arg1 toMenu:(id)arg2 title:(id)arg3;
- (id)topLevelViewNamed:(id)arg1;
- (void)updateRestoreWindowArrangementsMenu:(id)arg1 asTabs:(BOOL)arg2;
- (void)checkForUpdatesFromMenu:(id)arg1;
- (void)copyPerformanceStats:(id)arg1;
- (BOOL)version:(id)arg1 newerThan:(id)arg2;
- (id)shortVersionStringOfAppWithBundleId:(id)arg1;
- (void)checkForQuietMode;
- (BOOL)quietFileExists;
- (void)createVersionFile;
- (void)performStartupActivities;
- (void)complainIfNightlyBuildIsTooOld;
- (void)updateAddressBookMenu:(id)arg1;
- (void)nonTerminalWindowBecameKey:(id)arg1;
- (void)reloadMenus:(id)arg1;
- (void)getUrl:(id)arg1 withReplyEvent:(id)arg2;
- (void)toolDidToggle:(id)arg1;
- (void)windowArrangementsDidChange:(id)arg1;
- (void)processTypeDidChange:(id)arg1;
- (void)dynamicToolsDidChange:(id)arg1;
- (void)itermDidDecodeWindowRestorableState:(id)arg1;
- (void)sparkleWillRestartApp:(id)arg1;
- (void)workspaceSessionDidResignActive:(id)arg1;
- (void)workspaceSessionDidBecomeActive:(id)arg1;
- (id)statusBarMenu;
- (void)applicationDidFinishLaunching:(id)arg1;
- (void)applicationWillFinishLaunching:(id)arg1;
- (void)sorry1013;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillHide:(id)arg1;
- (void)applicationDidResignActive:(id)arg1;
- (void)application:(id)arg1 didDecodeRestorableState:(id)arg2;
- (void)application:(id)arg1 willEncodeRestorableState:(id)arg2;
- (void)applicationWillBecomeActive:(id)arg1;
- (id)applicationDockMenu:(id)arg1;
- (BOOL)applicationOpenUntitledFile:(id)arg1;
- (void)applicationWillTerminate:(id)arg1;
- (unsigned long long)applicationShouldTerminate:(id)arg1;
- (void)didToggleTraditionalFullScreenMode;
- (void)applicationDidChangeScreenParameters:(id)arg1;
- (BOOL)applicationShouldHandleReopen:(id)arg1 hasVisibleWindows:(BOOL)arg2;
- (BOOL)applicationShouldTerminateAfterLastWindowClosed:(id)arg1;
- (BOOL)application:(id)arg1 openFile:(id)arg2;
@property(readonly, nonatomic) NSMenu *uploadsMenu;
@property(readonly, nonatomic) NSMenu *downloadsMenu;
@property(readonly, nonatomic) BOOL useBackgroundPatternIndicator;
- (id)terminals;
- (id)currentTerminal;
@property(readonly, nonatomic) NSString *markAlertAction;
- (void)updateUseTransparencyMenuItem;
- (void)updateMaximizePaneMenuItem;
- (void)makeHotKeyWindowKeyIfOpen;
@property(readonly, nonatomic) BOOL warnBeforeMultiLinePaste;
- (void)openPasswordManagerToAccountName:(id)arg1 inSession:(id)arg2;
- (void)userDidInteractWithASession;
@property(readonly, nonatomic) BOOL isRunningOnTravis;
@property(readonly, nonatomic) BOOL isAppleScriptTestApp;
- (BOOL)validateMenuItem:(id)arg1;
- (void)awakeFromNib;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

